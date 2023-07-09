class person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def __str__(self):
        return f"{self.name}{-self.age}"

    def myfunc(self):  # this is a method
        print("Hello my name is "+ self.name)

p1 = person("John", 45)  #object creation using class persion

print(p1)
p1.myfunc()
        