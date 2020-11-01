import telebot

api = "1307073213:AAHO-JjiGDXhFJB3D1rncZziixvvedDjgWk"
bot = telebot.TeleBot(api)


@bot.message_handler(commands=["start"])
def send_welcome(message):
    # print(message)
    firstname = message.from_user.first_name
    lastname = message.from_user.last_name
    print(message.from_user.first_name)
    # print(message.chat.id)
    # print(message.from_user.id)
    bot.reply_to(message, "Halo apa kabar {} {}".format(firstname, lastname))


@bot.message_handler(commands=["help"])
def send_help(message):
    bot.reply_to(message, "Ada yang bisa saya bantu")


bot.polling()


# Struktur datanya
""" data = {
        'content_type': 'text', 
        'message_id': 49, 
        'from_user': {'id': 1309089514, 
        'is_bot': False, 
        'first_name': 'Cisnux', 
        'username': None, 
        'last_name': None, 
        'language_code': 'en', 
        'can_join_groups': None, 
        'can_read_all_group_messages': None, 
        'supports_inline_queries': None}, 
        'date': 1604144246, 
        'chat': {
            'id': 1309089514, 
            'type': 'private', 
            'title': None, 
            'username': None, 
            'first_name': 'Cisnux', 
            'last_name': None, 
            'all_members_are_administrators': None, 
            'photo': None, 
            'description': None, 
            'invite_link': None, 
            'pinned_message': None, 
            'permissions': None, 
            'slow_mode_delay': None, 
            'sticker_set_name': None, 
            'can_set_sticker_set': None
            }, 

        'forward_from': None, 'forward_from_chat': None, 
        'forward_from_message_id': None, 
        'forward_signature': None, 
        'forward_date': None, 
        'reply_to_message': None, 
        'edit_date': None, 
        'media_group_id': None, 
        'author_signature': None, 
        'text': '/start', 'entities': [<telebot.types.MessageEntity object at 0x7f8c3c841f10>], 
        'caption_entities': None, 
        'audio': None, 
        'document': None, 
        'photo': None, 
        'sticker': None, 
        'video': None, 
        'video_note': None, 
        'voice': None, 
        'caption': None, 
        'contact': None, 
        'location': None, 
        'venue': None, 
        'animation': None, 
        'dice': None, 
        'new_chat_member': None, 
        'new_chat_members': None, 
        'left_chat_member': None, 
        'new_chat_title': None, 
        'new_chat_photo': None, 
        'delete_chat_photo': None, 
        'group_chat_created': None, 
        'supergroup_chat_created': None, 
        'channel_chat_created': None, 
        'migrate_to_chat_id': None, 
        'migrate_from_chat_id': None, 
        'pinned_message': None, 
        'invoice': None, 
        'successful_payment': None, 
        'connected_website': None, 
        'json': {
            'message_id': 49, 
        'from': {
            'id': 1309089514, 
            'is_bot': False, 
            'first_name': 'Cisnux', 
            'language_code': 'en'
            }, 'chat': 
            {
                'id': 1309089514, 
                'first_name': 'Cisnux', 
                'type': 'private'
                }, 'date': 1604144246, 
                'text': '/start', 
                'entities': [{
                    'offset': 0, 
                    'length': 6, 
                    'type': 'bot_command',
                    }]}} """
