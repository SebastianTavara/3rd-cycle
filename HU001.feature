Feature: Prevención y detección de riesgo
    Scenario: Se activa la app mediante una palabra clave
    Given la usuaria previamente ha establecido una palabra <clave> en la aplicación
    When se encuentre en una situación de riesgo y mencione la palabra <clave>
    Then el sistema reconocerá su voz y palabra preestablecida, por ende se activará el <protocolo de emergencia> (grabación de audio, alerta a contactos, etc), sin mostrar señales visibles en la pantalla.
    Examples:
    | clave | protocolo de emergencia |
    | socorro  | true  |
    
