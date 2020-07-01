###########################################################
# Data Structure: Singly linked list - simple with list of
# nodes as part of the init function
# ---------------------------------------------------------
# Author: Lily Yang
# Resources: Github repository
###########################################################

from Node import Node

class SLinkedList:
  def __init__(self, nodes_list=None):
    """ 
    Initiates a simple LinkedList
    
    :param nodes_list: is a list containing value of each node 
    to initiate the linkedList
    
    """
    self.head = None

    # create the linked list based on the nodes_list
    if nodes_list is not None:
      new_node = Node(nodes_list.pop(0))
      self.head = new_node
      for value in nodes_list:
         new_node.next = Node(value)
         new_node = new_node.next


  def get_head(self):
      return self.head

  def print_list(self):
    """ Prints the values of the linked list """

    if self.head is None:
      print("List is empty")
    else:
      node = self.head
      while node:
        print(node.data, end=" ")
        node = node.next

      print()
  
  def __iter__(self):
    """ 
    Make this data structure an iterable by defining this 
    method for our class, this means that we can:

    >>> s = SLinkedList([1,2,3,4])
    >>> s_iter = iter(s)
    >>> next(s_iter)
    1
    
    """
    current_node = self.head
    while current_node:
      yield current_node.data
      curren_node = current_node.next

    