class employee:
    
    increment = 1.04

    def __init__(self, name, sex, pay):
        self.name = name
        self.sex = sex
        self.pay = pay

    def bonus(self):
        self.pay = (self.pay * self.increment)
        return self.pay

e = employee( "Aakash Varma", "Male", 100000)
print (e.bonus())





















