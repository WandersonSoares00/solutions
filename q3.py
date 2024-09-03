
with open("data.json") as file: data = json.load(file)

month = 'setembro'

print("Dias totais de {}: {}".format(month, len(data[month])));




