Feature: Prevención y detección de riesgo
    Scenario: Personalización de comandos y contactos de emergencia
    Given la usuaria se encuentra en la pagina de incio, debe acceder al menu de configuracion
    And seleccionar la opcion "seguridad"
    When la usuaria establezca su <palabra clave> y <contactos de emergencia>
    Then el sistema guardara los cambios y los actualizara automaticamente
    Examples:
    | palabra clave | contactos de emergencia |
    | lechuza | 999899111|
    | ColorSaborSazon | 999888777 |
