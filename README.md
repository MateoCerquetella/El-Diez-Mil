# El-Diez-Mil
Mi primer proyecto creado en C++ para la facultad de UTN FRGP. Diciembre del 2017

---------

# Enunciado
Se deberá​ ​desarrollar​ ​una​ ​variante​ ​del​ ​juego​ ​Diez​ ​mil,​ ​el​ ​cual​ ​es​ ​un​ ​juego​ ​de​ ​dados​ ​que​ ​se puede​ ​jugar​ ​para​ ​uno​ ​o​ ​dos​ ​jugadores.
El​ ​programa​ ​debe​ ​contar​ ​con​ ​un​ ​menú​ ​principal​ ​que​ ​permite​ ​iniciar​ ​un​ ​juego​ ​nuevo,​ ​ver​ ​el puntaje​ ​más​ ​alto​ ​y​ ​salir​ ​del​ ​juego.

## Juego​ ​nuevo​ ​para​ ​un​ ​jugador
Esta​ ​opción​ ​permite​ ​a​ ​un​ ​solo​ ​jugador​ ​realizar​ ​una​ ​partida​ ​completa​ ​de​ ​Diez​ ​mil.​ ​Antes​ ​de comenzar​ ​a​ ​jugar​ ​deberá​ ​solicitar​ ​el​ ​nombre​ ​del​ ​jugador.
Una​ ​vez​ ​finalizada​ ​la​ ​partida,​ ​deberá​ ​mostrar​ ​el​ ​nombre​ ​del​ ​jugador​ ​y​ ​la​ ​cantidad​ ​de​ ​turnos o​ ​rondas​ ​que​ ​necesito​ ​para​ ​obtener​ ​el​ ​puntaje​ ​requerido.

## Juego nuevo para dos jugadores
Esta​ ​opción​ ​permite​ ​a​ ​dos​ ​jugadores​ ​realizar​ ​una​ ​partida​ ​completa​ ​de​ ​Diez​ ​mil.​ ​Antes​ ​de comenzar​ ​a​ ​jugar​ ​deberá​ ​solicitar​ ​el​ ​nombre​ ​de​ ​los​ ​jugadores.
Una​ ​vez​ ​finalizada​ ​la​ ​partida,​ ​deberá​ ​mostrar​ ​el​ ​nombre​ ​del​ ​jugador​ ​que​ ​haya​ ​ganado​ ​y​ ​la cantidad​ ​de​ ​turnos​ ​o​ ​rondas​ ​que​ ​necesito​ ​para​ ​obtener​ ​el​ ​puntaje​ ​requerido.

## Mostrar puntuación más alta
Esta​ ​opción​ ​debe​ ​mostrar​ ​el​ ​nombre​ ​del​ ​jugador​ ​que​ ​haya​ ​finalizado​ ​el​ ​juego​ ​con​ ​la​ ​menor cantidad​ ​de​ ​rondas​ ​para​ ​obtener​ ​el​ ​puntaje​ ​requerido.​ ​Debe​ ​mostrar​ ​también​ ​la​ ​cantidad de​ ​rondas​ ​del​ ​juego​ ​ganador.

## Reglamento del juego
El​ ​objetivo​ ​del​ ​juego​ ​es​ ​obtener​ ​10000​ ​puntos​ ​en​ ​la​ ​menor​ ​cantidad​ ​de​ ​rondas​ ​posibles. Una​ ​ronda​ ​puede​ ​estar​ ​compuesta​ ​por​ ​varios​ ​lanzamientos.​ ​Un​ ​lanzamiento​ ​consiste​ ​en tirar​ ​seis​ ​dados​ ​y​ ​evaluar​ ​sus​ ​valores​ ​para​ ​determinar​ ​el​ ​puntaje.
Ell​ ​puntaje​ ​de​ ​un​ ​lanzamiento​ ​está​ ​determinado​ ​por​ ​una​ ​serie​ ​de​ ​reglas​ ​que​ ​figuran​ ​en​ ​la sección​ ​Combinaciones​ ​ganadoras.
Página​ ​2​ ​de​ ​6
Si​ ​en​ ​un​ ​lanzamiento​ ​el​ ​jugador​ ​obtiene​ ​una​ ​combinación​ ​ganadora​ ​entonces​ ​acumulará provisoriamente​ ​el​ ​puntaje​ ​correspondiente.
Luego​ ​de​ ​un​ ​lanzamiento​ ​ganador,​ ​el​ ​jugador​ ​debe​ ​elegir​ ​si​ ​desea​ ​volver​ ​a​ ​lanzar​ ​los dados​ ​o​ ​asegurarse​ ​el​ ​puntaje​ ​acumulado​ ​hasta​ ​el​ ​momento.​ ​Si​ ​en​ ​un​ ​lanzamiento​ ​el jugador​ ​no​ ​obtiene​ ​una​ ​combinación​ ​ganadora​ ​perderá​ ​todo​ ​el​ ​puntaje​ ​acumulado​ ​de​ ​esa ronda​ ​y​ ​será​ ​el​ ​turno​ ​del​ ​otro​ ​jugador.
Esta​ ​es​ ​la​ ​razón​ ​por​ ​la​ ​que​ ​seguir​ ​lanzando​ ​es​ ​riesgoso.​ ​La​ ​posibilidad​ ​de​ ​hacer​ ​más puntos​ ​debe​ ​ser​ ​considerada​ ​con​ ​el​ ​riesgo​ ​de​ ​perder​ ​todo​ ​lo​ ​que​ ​se​ ​ganó​ ​durante​ ​un​ ​turno. Una​ ​vez​ ​que​ ​un​ ​jugador​ ​decide​ ​finalizar​ ​el​ ​turno,​ ​todo​ ​el​ ​puntaje​ ​acumulado​ ​en​ ​el​ ​turno​ ​se acumulará​ ​al​ ​puntaje​ ​total​ ​del​ ​jugador.
Cuando​ ​un​ ​jugador​ ​obtiene​ ​exactamente​ ​10000​ ​puntos,​ ​el​ ​juego​ ​termina.​ ​Si​ ​un​ ​jugador​ ​se excede​ ​de​ ​los​ ​10000​ ​puntos​ ​volverá​ ​al​ ​puntaje​ ​que​ ​tenía​ ​previamente​ ​al​ ​comenzar​ ​la ronda.
Ejemplo:
Si​ ​en​ ​el​ ​inicio​ ​de​ ​una​ ​ronda​ ​el​ ​jugador​ ​tiene​ ​9000​ ​puntos​ ​y​ ​en​ ​transcurso​ ​de​ ​la​ ​ronda termina​ ​obteniendo​ ​1500​ ​puntos,​ ​entonces,​ ​como​ ​el​ ​puntaje​ ​acumulado​ ​total​ ​superaría​ ​los diez​ ​mil,​ ​la​ ​cantidad​ ​de​ ​puntos​ ​no​ ​variará,​ ​conservando​ ​los​ ​9000​ ​puntos​ ​que​ ​tenía​ ​al​ ​inicio.

## Combinaciones ganadoras

| Combinación                                                                 | Nombre jugada                      | Puntaje otorgado                        |
|-----------------------------------------------------------------------------|------------------------------------|-----------------------------------------|
| 1 ó 2 dados con valor 1                                                     | Juego de 1                         | 100 puntos por cada dado con el valor 1 |
| 1 ó 2 dados con valor 5                                                     | Juego de 5                         | 50 puntos por cada dado con valor 5     |
| 3 dados con valor 1                                                         | Trío 1                             | 1000 puntos                             |
| 3 dados con el mismo valor. Ej (5, 5, 5)                                    | Trío X (X es el número del dado)   | X*100 puntos                            |
| 4 ó 5 dados con el mismo valor (excepto el 1)                               | Trío X++ (X es el número del dado) | X*100 puntos* 2                         |
| 4 ó 5 dados con el valor 1                                                  | Trio 1 ampliado                    | 2000 puntos                             |
| Tres pares  Ej (3, 3, 4, 4, 5, 5) - (3, 3, 4, 4, 3, 3) - (3, 3, 3, 3, 3, 3) | Tres pares                         | 1000 puntos                             |
| Escalera de 5 dados  (1, 2, 3, 4, 5) - (2, 3, 4, 5, 6)                      | Escalera mediana                   | 500 puntos                              |
| Escalera de 6 dados (1, 2, 3, 4, 5, 6)                                      | Escalera larga                     | 1500 puntos                             |
| Seis unos                                                                   | Sexteto                            | Gana la partida en esa ronda            |

De​ ​obtener​ ​más​ ​de​ ​una​ ​combinación​ ​en​ ​el​ ​mismo​ ​lanzamiento,​ ​siempre​ ​deberá​ ​sumar​ ​el puntaje​ ​de​ ​mayor​ ​valor.
Por​ ​ejemplo:
## ⚁⚁⚁⚃⚄⚄
Se​ ​forman​ ​las​ ​combinaciones​ ​ganadoras
## ⚁⚁⚁​​ ​→​ ​2x100​ →​
## ⚄⚄​​ →​ ​ ​2x50​ ​→​ ​100​ ​puntos
El​ ​puntaje​ ​a​ ​otorgar​ ​deberá​ ​ser​ ​de​ ​200​ ​puntos​ ​ya​ ​que​ ​es​ ​la​ ​combinación​ ​de​ ​mayor​ ​valor.

# Interfaz:

## Durante​ ​el​ ​turno​ ​de​ ​un​ ​jugador
Se​ ​deberá​ ​mostrar​ ​el​ ​nombre​ ​del​ ​jugador,​ ​el​ ​número​ ​de​ ​ronda,​ ​el​ ​puntaje​ ​total​ ​que​ ​lleva acumulado.​ ​Luego​ ​se​ ​deberá​ ​mostrar​ ​dentro​ ​de​ ​la​ ​ronda​ ​el​ ​puntaje​ ​provisorio​ ​que​ ​lleva acumulado​ ​y​ ​la​ ​cantidad​ ​de​ ​lanzamientos.
Más​ ​abajo,​ ​se​ ​deberán​ ​listar​ ​los​ ​dados​ ​que​ ​conforman​ ​el​ ​lanzamiento​ ​y​ ​de​ ​obtener​ ​una combinación​ ​ganadora,​ ​el​ ​nombre​ ​de​ ​la​ ​combinación​ ​y​ ​el​ ​puntaje​ ​otorgado.

## Entre​ ​turnos
Cuando​ ​finaliza​ ​un​ ​turno​ ​y​ ​comienza​ ​el​ ​otro,​ ​deberá​ ​mostrar​ ​una​ ​pantalla​ ​que​ ​indique​ ​a quién​ ​le​ ​corresponde​ ​el​ ​próximo​ ​turno,​ ​el​ ​número​ ​de​ ​ronda​ ​y​ ​los​ ​puntajes​ ​de​ ​ambos jugadores.​ ​En​ ​el​ ​caso​ ​de​ ​que​ ​sea​ ​un​ ​juego​ ​para​ ​un​ ​jugador,​ ​debe​ ​indicar​ ​el​ ​número​ ​de ronda,​ ​el​ ​nombre​ ​del​ ​jugador​ ​y​ ​el​ ​puntaje.

## Ganador
Cuando​ ​un​ ​jugador​ ​gana​ ​la​ ​partida,​ ​se​ ​deberá​ ​mostrar​ ​una​ ​pantalla​ ​que​ ​indique​ ​el​ ​nombre y​ ​apellido​ ​del​ ​ganador​ ​y​ ​la​ ​cantidad​ ​de​ ​rondas​ ​que​ ​llevó​ ​ganar​ ​la​ ​partida.
Existe​ ​la​ ​posibilidad​ ​de​ ​empate.​ ​Esto​ ​ocurre​ ​cuando​ ​ambos​ ​jugadores​ ​logran​ ​los​ ​diez​ ​mil puntos​ ​en​ ​la​ ​misma​ ​ronda.
