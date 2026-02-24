cupos = 5
reservass = []


def hay_cupo(reservas, capacidad):
    """Retorna True si todavía hay cupo."""
    if len(reservas) == capacidad:
        return False
    else:
        return True
    
def mostrar_resumen(reservas, capacidad):
    """Muestra cuántos cupos se usaron y la lista de reservas aceptadas.""" 
    texto = ""
    print(f'Reservas aceptadas: {5-capacidad}/5')
    for i in reservas:
        texto += f"{i}, "
    print(texto)

while hay_cupo(reservass, cupos):
    print(f"Cupos disponibles: {cupos}")
    descision = input("Ingrese su nombre (o 'salir'): ")
    if descision == 'salir':
        mostrar_resumen(reservass, cupos)
        break
    else:
        reservass.append(descision)
        cupos -= 1
        print("Reserva aceptada")
        continue