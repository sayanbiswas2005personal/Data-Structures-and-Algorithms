def func(n):
    if n == 0:
        return
    func(n-1)
    print(n)
def func2(n):
    if n == 0:
        return
    print(n)
    func2(n-1)
print("Normal print")
func(5)
print("Reverse print")
func2(5)