# name : Amany Ahmed mohamed
#id : 2019565349

def fractional_knapsack(value, weight, capacity, name):
    index = list(range(len(value)))  # indexing items
    cost = [v/w for v, w in zip(value, weight)]
    # sorting items first by their costs in decreasing order
    index.sort(key=lambda i: cost[i], reverse=True)
    max_value = 0
    fractions = [0]*len(value)
    print("\tname\tweight\tvalue\tleft")
    print("\t------------------------------")
    # looping over weights and values and taking max value to cost
    for w in index:
        if weight[w] <= capacity:
            # adding values to the sac as long as they can fit and have max value to weight
            fractions[w] = 1
            max_value += value[w]
            capacity -= weight[w]
            print(f"\t{name[w]}\t{weight[w]}\t{value[w]}\t{capacity}")
        else:
            # taking fraction since the whole value won't fit
            fractions[w] = capacity/weight[w]
            max_value += value[w]*capacity/weight[w]
            print(f"\t{name[w]}\t{weight[w]}\t{value[w]}\t{capacity}")
            break

    return capacity, max_value, fractions


weight = [7.0, 4, 15, 3, 6, 5.8, 3.0, 4.5, 2.5]
value = [1400, 540, 2400, 240, 240, 425, 2000, 500, 250]
name = ['shrimp', 'beef', 'lamp', 'turkey',
        'chicken', 'fish', 'duck', 'salami', 'crabs']
org_capacity = 49
capacity, max_value, fractions = fractional_knapsack(
    value, weight, org_capacity, name)

print(
    f'\nOriginal capacity : {org_capacity}\nMax  Weight: {org_capacity-capacity}\nAmount Left : {capacity}')
# items with total weight not more than capacity
print('Max value of items  carried:', max_value)
# item & fraction that should be taken of items
print('Values and fractions order:', fractions)
