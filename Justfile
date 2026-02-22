compile keyboard="lily58/rev1" keymap="allium58":
    qmk compile -kb {{keyboard}} -km {{keymap}}

json2c keymap="allium58":
    qmk json2c ./'{{keymap}}'/keymap.json

flash side keyboard="lily58/rev1" keymap="allium58":
    qmk flash -c -kb {{keyboard}} -km {{keymap}} -e CONVERT_TO=promicro_rp2040 -bl 'uf2-split-{{side}}'
