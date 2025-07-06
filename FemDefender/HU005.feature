Feature: Acesso de recursos de apoyo
    Scenario: Acceso a información confiable en situaciones de violencia
    Given la usuaria desee informarse previamente a una situación de riesgo
    When acceda a la sección “Información” y seleccione el <tema> del que desea conocer
    Then en pantalla verá guías oficiales, recomendaciones, artículos, banners, etc
    Examples:
    |   tema    |
    |demanda por alimentos|
    |que hacer en caso de agresion|  

