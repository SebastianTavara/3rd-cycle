Feature: Recolección de evidencia y gestión en denuncias
    Scenario: Autorizar acceso al historial de evidencias 
    Given la <usuaria> ha registrado en el sistema a su abogada como <contacto autorizado>
    And ha dado su consentimiento para compartir las evidencias
    When la autoridad o abogada acceda a la aplicación con sus credenciales
    Then el sistema le permitirá visualizar el historial con todos los detalles organizados
    Examples:
    |   usuaria    |contacto autorizado|
    |    Maria     |     abogada       |
    |    Aurelia   |  amiga cercana    |