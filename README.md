# Access_Control_System
Система контроля и управления доступом по лицу и жестам на базе Arduino с управлением через Телеграм бот.

# О чём проект
- Система разпознаёт лицо или жест на видео и предоставляет/запрещает доступ и отправляет сигнал на исполнительное устройство.
- Если Вашего лица нет в базе или доступ Вам запрещён, можно сгенерировать случайный одноразовый жест.

# Стек
- Разпознавание лиц - библиотека Face Recognition. Работает достаточно точно и быстро.
- Распознавание жестов - библиотека Media Pipe, распознаёт жесты по разметке координат на руке.
- База данных - MySql.
- Испонительное устройство мы использоваьи arduino по интерфейсу RS232. Можно использовать ethernet или Wifi. Как вариант можно использовать Raspberry Pi.
- Управление системы - Telegram bot:
  * Вход по пин-коду
  * Просмотр пользователей с фото
  * Управление уровнем доступа (доступ открыт/закрыт)
  * Просмотр отчёта о проходах пользователей
  * Добавление нового пользователя
- В качестве источника сигнала можно использовать любое устройство видеозахвата (ip-камера, веб-камера, видеозапись)
