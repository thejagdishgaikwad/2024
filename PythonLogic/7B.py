class Person:
    def __init__(self,name,age):
        self.name=name
        self.age=age
    def getInfo(self):
        return (self.name+" " + str(self.age))
    def isEmployee(self):
        return False
class Employee(Person):
 def isEmployee(self):
    return True
emp=Person("Ravi",15)
print(emp.getInfo(),emp.isEmployee())
emp=Employee("Dev",20)
print(emp.getInfo(),emp.isEmployee())