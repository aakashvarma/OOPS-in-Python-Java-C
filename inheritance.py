class Father():
    def __init__(self):
        print("I like coding")

class Mother():
    def skills(self):
        print("I like cooking")

class Child(Father, Mother):
    def skills(self):
        Mother.skills(self)
        print("I like football ")

c = Child()
c.skills()
