
class Employee:
    
    increment = 1.40
    no = 0

    def __init__(self, first, last, sex, pay):
        self.first = first
        self.last = last
        self.sex = sex
        self.pay = pay
        Employee.no += 1

    def full_name(self):
        return '{} {}'.format(self.first, self.last)

    def apply_raise(self):
        self.pay = self.pay * self.increment
        return self.pay

    def count(self):
        return self.no
    
    def __repr__(self):
        return Employee.full_name(self)

e1 = Employee("Aakash", "Varma", "Male", 1000)
e2 = Employee("Manmeet", "Tarun", "Trans", 1000)

# print (e1.no)
print (e1.__repr__())

















