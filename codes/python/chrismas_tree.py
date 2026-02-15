def print_christmas_tree(height=10):
    for i in range(height):
        spaces = ' ' * (height - i - 1)
        stars = '*' * (2 * i + 1)
        print(spaces + stars)
    trunk_spaces = ' ' * (height - 2)
    print(trunk_spaces + '||')
    print(trunk_spaces + '||')
print_christmas_tree(10)