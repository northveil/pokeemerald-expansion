HoneyTree_EventScript::
    msgbox HoneyTree_Text_SweetScent, MSGBOX_DEFAULT
    checkitem ITEM_HONEY
    goto_if_eq VAR_RESULT, FALSE, HoneyTree_EventScript_Cancel
    msgbox HoneyTree_Text_SlatherWithHoney, MSGBOX_YESNO
    compare VAR_RESULT, NO
    goto_if_eq HoneyTree_EventScript_Cancel
    msgbox HoneyTree_Text_TheBarkWasSlathered, MSGBOX_DEFAULT
    closemessage
    delay 5
    playse SE_M_SWEET_SCENT
    waitse
    delay 10
    removeitem ITEM_HONEY
    special HoneyTreeWildEncounter
    release
    end

HoneyTree_EventScript_Cancel::
    release 
    end

HoneyTree_Text_SweetScent:
    .string "There is a sweet scent in the air.$"

HoneyTree_Text_SlatherWithHoney:
    .string "Slather the bark with honey?$"

HoneyTree_Text_TheBarkWasSlathered:
    .string "The bark was slathered with honey.$"
