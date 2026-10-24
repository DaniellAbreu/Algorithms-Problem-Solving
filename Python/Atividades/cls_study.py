class Animal:
    def speak(self):
        print("Some generic sound")

class Dog(Animal):
    def speak(self):
        super().speak()
        print("Bark!")

Cachorrinho = Dog()

Cachorrinho.speak()