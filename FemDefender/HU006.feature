Feature: Acesso a recursos de apoyo
    Scenario: Guía  inicial
    Given la usuaria ha descargado la aplicación por primera vez
    And tiene poco conocimiento sobre las funcionalidades
    When inicie sesión por primera vez
    Then el sistema la guía para configurar su palabra clave, contactos de confianza y el funcionamiento del sistema de recolección de evidencia
    