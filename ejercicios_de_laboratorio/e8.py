def variable_length(**kwargs):
    print(f"{len(kwargs)} data structures and their operations:")
    for title, name in kwargs.items():
        print(f"\t{title}-> {name}")