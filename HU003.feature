Feature: Prevención y detección de riesgo
    Scenario: Notificación automática al detectar peligro
    Given que la usuaria previamente ha configurado a sus contactos de confianza en la app
    When el sistema derecte la <palabra clave> o algun <patron de sonido> preestablecido
    Then el sistema enviara inmediatamente una <alerta a sus contactos>, adjuntando la ubicacion en tiempo real
    Examples:
    | palabra clave | patron de sonido | alerta a sus contactos |
    | lechuga       |        0         |        true            |
    |       0       |'insultos''gritos'|        true            |
