class Father():
    def __init__(self):
        print("I love coding")

class Mother():
    def skills(self):
        print("I like cooking")

class Child(Father, Mother):
    def skills(self):
        Mother.skills(self)
        print("I love football ")

c = Child()
c.skills()
