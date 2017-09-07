def palindrome_substrings(s):
    count = 0
    for center in xrange(len(s)*2-1):
        left, right = center/2, center/2 + center % 2
        while s[left] == s[right] and left > 0 and right < len(s):
            count, left, right = count+1, left-1, right+1
    return count

def palindrome_stupid(s):
    return s == s[::-1]

def palindrome(s):
    for i in range(len(s)/2):
        if s[i] != s[len(s)-i-1]:
            return False
    return True

print palindrome('')

from threading import Lock
class Stack():
    def __init__(self, size, stack=[]):
        self.stack = stack
        self.size = size
        self.lock = Lock()

    def pop(self):
        self.lock.acquire()
        if len(self.stack) <= 0:
            lock.release()
            raise ValueError
        ret = self.stack[-1]
        self.stack = self.stack[:-1]
        self.lock.release()
        return ret

    def push(self, element):
        self.lock.acquire()
        if len(self.stack) == self.size:
            lock.release()
            raise ValueError
        self.stack.append(element)
        self.lock.release()

stack = Stack(10)
stack.push('a')
print stack.pop()

class Queue():
    def __init__(self, size, queue=[]):
        self.size = size
        self.queue = queue

    def enqueue(self, element):
        if self.size >= len(self.queue):
            raise Exception('Tried to enqueue to full queue')
        self.queue.append(element)

    def dequeue(self):
        if len(self.queue <= 0):
            raise Exception('Tried to dequee from empty queu')
        ret = self.queue[0]
        self.queue = self.queue[1:]
        return ret
