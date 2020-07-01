// Source: https://github.com/williamfiset/Algorithms/blob/master/src/main/java/com/williamfiset/algorithms/datastructures/priorityqueue/BinaryHeap.java
// Source: https://www.youtube.com/watch?v=RBSGKlAvoiM&t=4459s
// The following isn't my code, it's from William Fiset for learning purposes

import java.util.*;

// This is to make sure my queue structure only allows comparable types
class PQueue <T extends Comparable<T>> {
  private int heapSize = 0;
  private int heapCapacity = 0;
  private List <T> heap = null;

  private Map <T, TreeSet<Integer>> map = new Hashmap<>();
}