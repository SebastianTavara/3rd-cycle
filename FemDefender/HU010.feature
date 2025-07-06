Feature: Asegurar la funcionalidad crítica en zonas sin señal
    Scenario: Funcionamiento en zonas sin conexión
    Given la usuaria se encuentra en una zona sin señal o con acceso limitado a Internet
    When la app se abre y no tiene acceso a la red
    Then la app debe permitir la activación de funciones esenciales, tales como el envío de alertas y la recolección de evidencia audio/video, almacenando estos datos localmente en el dispositivo hasta que la conexión a Internet sea restaurada, momento en el cual la app debe sincronizar los datos automáticamente
    
    