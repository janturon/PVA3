## Markdown

HTML je out. Čím dál více editorů (vč. vašeho README.md) podporuje čitelnější markdown. Syntaxe viz [popis na Wikipedii](https://cs.wikipedia.org/wiki/Markdown).

## SSH klíč

SSH klíče se automaticky hledají ve domovské složce uživatele v podadresáři .ssh (na Windows i pod Linuxem). Používají se dva klíče: veřejný (uložený s příponou .pub) a privátní (bez přípony). Privátní klíče po vás chtějí servery (např. GitHub: Settings > SSH and GPG keys), které chtějí ověřit vaši identitu (autentizace), soukromý klíč nikomu nedávejte.

Pod Windows vygenerujete klíč např. pomocí nástroje puttygen. Soukromý klíč v openSSH formátu uložíte z menu Conversions > Export openSSH key, veřejný klíč zkopírujete z pole key.

Funguje to na následujícím principu:

1. Server vám pošle náhodně vygenerovaná data.
2. Váš stroj data podepíše (zašifruje) pomocí privátního klíče a pošle zpět.
3. Server je dekóduje pomocí veřejného klíče, a pokud jsou stejná jako původní, jste ověřeni.

Na síti se tak nikdy neobjeví privátní klíč ani heslo.

## První spuštění gitu

1. nainstalujte si git (pro windows [zde](https://git-scm.com/download/win))
2. spusťte příkaz `git config --global user.name "vaše jméno"`, nastavte také klíč `user.email`, případně `core.editor`

## Vytvoření a sdílení repozitáře

1. Na git serveru (veřejný GitHub), vytvoříte repozitář.
2. Pozvete lidi ke spolupráci (Settings > Collaborators), musí mít účet na GitHubu
3. Kdokoliv může spustit příkaz `git clone váš-repozitář.git`, který stáhne aktuální obsah a nastaví spojení se vzdáleným repozitářem na serveru (toto můžete omezit nastavením repozitáře jako privátní). Pouze lidé s přístupem mohou obsah editovat.
4. Příkaz `git clone` volejte pouze při první kopii na váš počítač. Tento příkaz vytvoří podadresář .git (který bývá někdy jako skrytý), kde jsou veškeré údaje o lokálním repozitáři.

## Aktualizace dat

1. Editujte a přidávejte soubory
2. Po dokončení změn spusťte `git status`: červeně jsou nové změny, zeleně změny připravené k zapsání.
3. Červené změny potvrdíte příkazem `git add soubor`, případně všechny soubory `git add .`
4. Zapíšete změny příkazem `git commit -m "popis změn"`
5. Kroky 3 a 4 lze provést jediným příkazem `git commit -am "popis změn"`
6. Nahrajete změny na server příkazem `git push` - GitHub mě o tom informuje na úvodní stránce
7. Časem vám odpovím tím, že do souboru provedu nějaké změny.
8. Novou verzi (a nové úkoly) aktualizujete na vašem disku příkazem `git pull` - toto volejte **před tím**, než budete dělat úpravy