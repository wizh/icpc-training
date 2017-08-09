class TreeNode():
    def __init__(self, val, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

def bottom_left(root):
    stack = [(root, 0, True)]
    max_element = 0, root.val  # (depth, val)
    while stack:
        node, depth, left = stack.pop()
        if node.left:
            stack.append((node.left, depth+1, True))
        if node.right:
            stack.append((node.right, depth+1, False))
        if left:
            if depth > max_element[0]:
                max_element = depth, node.val
    return max_element[1]

tree = TreeNode(2, TreeNode(1, TreeNode(4)),
                TreeNode(3, TreeNode(5, TreeNode(7)), TreeNode(6)))
print bottom_left(tree)
