class TreeNode():
    def __init__(self, val, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

def merge(t1, t2):
    if not t1:
        return t2
    if not t2:
        return t1
    t1.val, t1.left, t1.right = (t1.val+t2.val, merge(t1.left, t2.left),
                                                merge(t1.right, t2.right))
    return t1

def in_order(root):
    if not root:
        return
    in_order(root.left)
    print root.val
    in_order(root.right)

t1 = TreeNode(1, TreeNode(3, TreeNode(5)), TreeNode(2))
t2 = TreeNode(2, TreeNode(1, None, TreeNode(4)), TreeNode(3, None, TreeNode(7)))
merged = merge(t1, t2)
in_order(merged)
