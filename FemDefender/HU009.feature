Feature: Acceso a recursos de apoyo
    Scenario: Conexión con organizaciones aliadas
    Given la <usuaria> ha ingresado al menú de opciones
    And ha seleccionado la opción de “Contactar con organizaciones”
    When la <usuaria> seleccione el <tipo de apoyo> que necesita psicológico o legal
    Then el sistema explaya una lista de organizaciones disponibles junto a sus medios de contacto, servicios, programas y establecimientos físicos de ayuda
    Examples:
    |   usuaria    |tipo de apoyo|
    |    Maria     | psicológico |
    |    Eugenia   |   legal     |