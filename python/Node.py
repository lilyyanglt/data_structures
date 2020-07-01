###########################################################
# Data Structure: Node structure with just data and next
# pointer
# ---------------------------------------------------------
# Author: Lily Yang
###########################################################

# single pointer Node
class Node:
  def __init__(self, data):
    self.data = data
    self.next = None

# tree node
class TreeNode:
  def __init__(self, data):
    self.data = data
    self.left = None
    self.right = None