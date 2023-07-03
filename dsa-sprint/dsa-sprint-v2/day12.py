# https://leetcode.com/problems/lru-cache/

# logic: basic operations are to remove least recently used item while maintaining it's capacity and to store key:value pairs, spomewhat like a hashmap structure. but to efficiently remove lru item from the cache, linked list is good vecause of constant time removal when we have reference to previous node (doubly linked list has that). most recently used item is placed at the front of the list and the least recently used item is at the end. when cache is full and have to add new item, lru item can be removed in constant time O(1), just have to update the prev and next pointers of the nodes in linked list.

# starting from initialisation, we need to create an empty doubly linked list (with dummy nodes tail and head) and assign a capacity, and also init a hashmap (to use as a lookup table) to store key : node pairs for easy access.
# for get function, we simply check if the key is present in hashmap, if yes, we get the node (which is value of that key in hashmap) and move that to first position (after head node) to indicate it was recently used and we return that node's value. if not present, return -1
# for put function, if the key already present in cache then get the corresponding node, update it's value and move it to first position. if not, then check if we reached capacity, if reached then remove the node near tail (lru item) and remove it from hashmap as well. now, add the new entry near head and also to hashmap.

class Node:
    def __init__(self, key, value):
        self.key = key
        self.value = value
        self.prev = None
        self.next = None

class LRUCache:
    def __init__(self, capacity: int):
        self.capacity = capacity
        self.cache = {}
        self.head = Node(None, None)
        self.tail = Node(None, None)
        self.head.next = self.tail
        self.tail.prev = self.head

    def _add_node(self, node):
        node.prev = self.head
        node.next = self.head.next
        self.head.next.prev = node
        self.head.next = node

    def _remove_node(self, node):
        node.prev.next = node.next
        node.next.prev = node.prev

    def _move_to_head(self, node):
        self._remove_node(node)
        self._add_node(node)

    def _pop_tail(self):
        tail_node = self.tail.prev
        self._remove_node(tail_node)
        return tail_node

    def get(self, key: int) -> int:
        if key in self.cache:
            node = self.cache[key]
            self._move_to_head(node)
            return node.value
        else:
            return -1

    def put(self, key: int, value: int) -> None:
        if key in self.cache:
            node = self.cache[key]
            node.value = value
            self._move_to_head(node)
        else:
            if len(self.cache) == self.capacity:
                tail_node = self._pop_tail()
                del self.cache[tail_node.key]
            new_node = Node(key, value)
            self.cache[key] = new_node
            self._add_node(new_node)
