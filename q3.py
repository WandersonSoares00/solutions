import json

with open('data.json') as file:
    data = json.load(file)

def min_income():
    min = data[0]['valor']
    for d in data:
        if (d['valor'] < min):
            min = d['valor']
    return min

def max_income():
    max = data[0]['valor']
    for d in data:
        if (d['valor'] > max):
            max = d['valor']
    return max

def average_income():
    sum = 0.0
    count = 0
    for d in data:
        if (d['valor'] != 0):
            count += 1
            sum += d['valor']
    if (count == 0):
        return 0.0
    return sum / count

print("Dias totais: {}".format(len(data)));

print("Menor valor de faturamento: {}".format(min_income()))

print("Maior valor de faturamento: {}".format(max_income()))

avg = average_income()

days = 0

for d in data:
    if (d['valor'] > avg):
        days += 1

print("Em {} dias o faturamento diário excedeu a média mensal de {}".format(days, avg))

