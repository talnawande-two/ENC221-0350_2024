class Roommate:
    def __init__(self, name, age, personality, hobby):
        self.name = name
        self.age = age
        self.personality = personality
        self.hobby = hobby

    def display_info(self):
        print("Roommate Details:")
        print(f"Name: {self.name}")
        print(f"Age: {self.age}")
        print(f"Personality: {self.personality}")
        print(f"Hobby: {self.hobby}")

r = Roommate("Brian", 20, "Calm and organized", "Watching football")
r.display_info()