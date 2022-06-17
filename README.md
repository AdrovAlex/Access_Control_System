# Access_Control_System
Система контроля и управления доступом по лицу и жестам на базе Arduino с управлением через Телеграм

# О чём проект
Система разпознаёт лицо или жест на видео и предоставляет/запрещает доступ на исполнительное устройство.
Можно использовать например в составе "умного дома"
Если Вашего лица нет в базе или доступ Вам запрещён, можно сгенерировать случайный одноразовый жест

# Стек
- Разпознавание лиц - библиотека Face Recognition. Работает достаточно точно и быстро.
- Распознавание жестов - библиотека Media Pipe, распознаёт жесты по разметке координат на руке.
- База данных - MySql.
- Испонительное устройство мы использоваьи arduino по интерфейсу RS232. Можно использовать ethernet или Wifi. Как вариант можно использовать Raspberry Pi.

В качестве источника сигнала можно использовать любое устройство видеозахвата (ip-камера, веб-камера, видеозапись)
