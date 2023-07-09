class person:
    def __init__(self, fname, lname):
        self.fname = fname
        self.lname = lname

    def printname(self):
        print(self.fname, self.lname)
        
class student(person):
    def __init__(self, fname, lname, year):
        super().__init__(fname, lname)
        self.year = year

    def welcome(self):
        print("Welcome", self.fname, self.lname, "to the class of", self.year)

p1 = person("John", "shy")  #object creation using class persion
s1 = student("mike", "shi", 2012) #object created in student class

p1.printname()

x = student("aarav","subedi",2021)
x.welcome()        