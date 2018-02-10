class bank:
    def __init__(self, n, b, o):
        self.name = n
        self.balance = b
        self.occupation = o
    
    def check(self):
        if ( self.balance < 1000 ):
            print ("Your blanace is below the required minimum account balance")
        else:
            print ("You are good to go")

    def display(self):
        print ("Name: %s" %self.name)
        print ("Balance: %d" %self.balance)
        print ("Occupation: %s" %self.occupation)
        
bank1 = bank('Aakash', 10000, 'Student')
bank2 = bank('Varma', 500, 'ML Developer')

bank1.check()
bank1.display()























