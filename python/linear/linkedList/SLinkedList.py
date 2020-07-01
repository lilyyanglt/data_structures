###########################################################
# Data Structure: Singly linked list implementation with 
# just head pointer - simple
# ---------------------------------------------------------
# Author: Lily Yang
# Resources: Educative.io, Geeks for Geeks
###########################################################

from Node import Node

class SLinkedList:
  def __init__(self):
    """ Initiates the Linked list """
    self.head = None
  
  def append(self, data):
    """ Adds a data to the end of list """
    
    new_node = Node(data)

    # List is empty
    if self.head is None:
      self.head = new_node
    else:
    # List is not empty
    # temp is a pointer that traverses the list until it gets to the last node
      temp = self.head
      while temp is not None:
        temp = temp.next
    
      temp.next = new_node

  def prepend(self, data):
    """ Adds a data to beginning of list """
    
    new_node = Node(data)


  def insert(self, value, data):
    """ 
    Adds a node in the middle

    Time Complexity: O(n)

    :param value: the value at which the new node is to be inserted after
    :param node: the node object that is to be inserted

    """

    pass

  def remove(self, value):
    """ remove node """

  def reverse(self):
    """ reverses the linked list """


  def search(self, value):
    """ search for a value in the linked list 
    
    
    
    """

  def sort(self):
    """ sorts the linked list in ascending order """

  def get_head():
    pass

  def get_tail():
    pass
