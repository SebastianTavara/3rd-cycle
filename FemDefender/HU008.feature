Feature: Recolección de evidencia y gestión en denuncias
    Scenario: Recolección segura de evidencia multimedia
    Given la usuaria se encuentra en una situación de riesgo
    And ha configurado previamente la app con acceso a cámara, micrófono y su cuenta en la nube
    When active la opción de grabación desde la app o un botón de emergencia
    Then se grabará audio o video, y el archivo se guardará automáticamente en la nube con cifrado de extremo a extremo
