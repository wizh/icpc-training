class tree:
    def __init__(self):
        self.root = None

    def insert(self, val):
        if self.root:
            self.__insert(val, self.root)
        else:
            self.root = tree_node(val)

    def __insert(self, val, node):
        if val > node.val:
            if node.right:
                self.__insert(val, node.right)
            else:
                node.right = tree_node(val)
        elif val < node.val:
            if node.left:
                self.__insert(val, node.left)
            else:
                node.left = tree_node(val)

class tree_node:
    def __init__(self, val):
        self.left = None
        self.right = None
        self.val = val

# determines if t1 has same structure as t2
def compare(t1, t2):
    if not t1 and not t2:
        return True
    if t1 and not t2 or not t1 and t2:
        return False
    return compare(t1.left, t2.left) and compare(t1.right, t2.right)

n, _ = map(int, raw_input().split(' '))
ts = []

for _ in range(n):
    t = tree()
    for v in map(int, raw_input().split(' ')):
        t.insert(v)
    ts.append(t)

uniques = 0
for i, t1 in enumerate(ts):
    unique = True
    for t2 in ts[i+1:]:
        if compare(t1.root, t2.root):
            unique = False
            break
    uniques += unique

print uniques