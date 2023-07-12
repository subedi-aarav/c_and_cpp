class vehicle:
    def __init__(self, brand, model):
        self.brand = brand
        self.model = model

    def move(self):
        print("move!")

class car(vehicle):
    pass

class boat(vehicle):
    def move(self):
        print("Sail!")

class plane(vehicle):
    def move(self):
        print("Fly!")

car1 = car("FORD","MUSTANG") #Creat a Car Object
boat1 = boat("Ibizz", "Touring 20") #Create a Boat Object 
plane1 = plane("Boeing", "747") # Create a Plane Object

for x in (car1, boat1, plane1):
    print(x.brand)
    print(x.model)
    x.move()

