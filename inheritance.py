class Father():
    def __init__(self):
        print("I love coding")

class Mother():
    def cooking(self):
        print("I like cooking")

class Child(Father, Mother):
    pass

c = Child()
c.cooking()
