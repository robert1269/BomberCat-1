const char* styles_css = R"=====(:root {
    --main-logo-background: #1A5157;
    --text-section: #333333;
    --fill-input-field: #F8F9FC;
    --border: #aeaeae;
    --white: #FFFFFF;
    --text: #000000;
    --gray-text: #5f5f5f;
    --lg: 28px;
    --md: 16px;
    --sm: 12px;
    --xsm: 10px;
}

body {
    margin: 0;
    padding: 0;
    font-family: 'Segoe UI';
}

/* Animations */
.lds-roller {
    display: inline-block;
    position: relative;
    width: 160px;
    /* Doble de tamaño */
    height: 160px;
    /* Doble de tamaño */
}

.lds-roller div {
    animation: lds-roller 1.2s cubic-bezier(0.5, 0, 0.5, 1) infinite;
    transform-origin: 80px 80px;
    /* Doble de tamaño */
}

.lds-roller div:after {
    content: " ";
    display: block;
    position: absolute;
    width: 14px;
    /* Doble de tamaño */
    height: 14px;
    /* Doble de tamaño */
    border-radius: 50%;
    background: #53dda1;
    margin: -8px 0 0 -8px;
    /* Doble de tamaño */
}

.lds-roller div:nth-child(1) {
    animation-delay: -0.036s;
}

.lds-roller div:nth-child(1):after {
    top: 126px;
    /* Doble de tamaño */
    left: 126px;
    /* Doble de tamaño */
}

.lds-roller div:nth-child(2) {
    animation-delay: -0.072s;
}

.lds-roller div:nth-child(2):after {
    top: 136px;
    /* Doble de tamaño */
    left: 112px;
    /* Doble de tamaño */
}

.lds-roller div:nth-child(3) {
    animation-delay: -0.108s;
}

.lds-roller div:nth-child(3):after {
    top: 142px;
    /* Doble de tamaño */
    left: 96px;
    /* Doble de tamaño */
}

.lds-roller div:nth-child(4) {
    animation-delay: -0.144s;
}

.lds-roller div:nth-child(4):after {
    top: 144px;
    /* Doble de tamaño */
    left: 80px;
    /* Doble de tamaño */
}

.lds-roller div:nth-child(5) {
    animation-delay: -0.18s;
}

.lds-roller div:nth-child(5):after {
    top: 142px;
    /* Doble de tamaño */
    left: 64px;
    /* Doble de tamaño */
}

.lds-roller div:nth-child(6) {
    animation-delay: -0.216s;
}

.lds-roller div:nth-child(6):after {
    top: 136px;
    /* Doble de tamaño */
    left: 48px;
    /* Doble de tamaño */
}

.lds-roller div:nth-child(7) {
    animation-delay: -0.252s;
}

.lds-roller div:nth-child(7):after {
    top: 126px;
    /* Doble de tamaño */
    left: 34px;
    /* Doble de tamaño */
}

.lds-roller div:nth-child(8) {
    animation-delay: -0.288s;
}

.lds-roller div:nth-child(8):after {
    top: 112px;
    /* Doble de tamaño */
    left: 24px;
    /* Doble de tamaño */
}

@keyframes lds-roller {
    0% {
        transform: rotate(0deg);
    }

    100% {
        transform: rotate(360deg);
    }
}

/* End animations */
.emulate-nfc-container {
    /* position: relative; */
    width: 160px;
    height: 160px;
}

.emulate-nfc-button {
    all: unset;
    width: 160px;
    height: 160px;
    position: absolute;
    z-index: 2;
    display: flex;
    flex-direction: column;
    justify-content: center;
    align-items: center;
    cursor: pointer;
}

.nfc-button-text {
    font-size: var(--lg);
}

.scroller {
    position: absolute;
    z-index: 1;
}

.main-container.background {
    background-color: var(--main-logo-background);
}

.main-background {
    padding-left: 20px;
    padding-right: 20px;
    padding-top: 10px;
    padding-bottom: 70px;
    min-height: calc(100vh - 220px);
    overflow-y: auto;
    border-top-left-radius: 30px;
    border-top-right-radius: 30px;
    background-color: var(--white);
    display: flex;
    flex-direction: column;
    align-items: center;
    justify-content: center;
}

.header-container {
    display: grid;
    grid-template-columns: auto auto;
    place-items: center;
    align-items: center;
    justify-content: center;
    margin-left: 10px;
    margin-top: 52px;
    margin-bottom: 30px;
}


.logoTitle {
    color: var(--main-logo-background);
    font-size: var(--lg);
    font-weight: 700;
    padding: 30px 0px 30px 30px;
}

.signin {
    width: 100%;
    height: 100%;
    display: grid;
    place-items: center;
}

.ssid {
    margin-top: 104px;
    width: 100%;
    height: 100%;
    display: grid;
    place-items: center;
}

.ap {
    display: none;
}

.form-container {
    display: grid;
    grid-template-rows: auto 1fr auto;
    width: 300px;
}

.title {
    font-size: var(--lg);
    text-align: center;
    margin-bottom: 64px;
    font-weight: 700;
}

.subtitle {
    height: 48px;
    color: var(--text-field);
    font-size: var(--md);
    text-align: center;
    margin-top: 0;
    margin-bottom: 20px;
}

.i-title-container {
    width: 193px;
}

.i-title {
    color: var(--text-section);
}

.form {
    display: flex;
    flex-direction: column;
    align-items: center;
}

input::-webkit-outer-spin-button,
input::-webkit-inner-spin-button {
    display: none;
}

.input {
    width: 265px;
    height: 26px;
    background-color: var(--fill-input-field);
    border: 1px solid var(--border);
    outline: none;
    border-radius: 27px;
    font-size: var(--sm);
    padding: 5px 5px 5px 20px;
    margin-bottom: 24px;
    color: var(--text);
}

.inputC {
    width: 380px;
    height: 26px;
    background-color: var(--fill-input-field);
    border: 1px solid var(--border);
    outline: none;
    border-radius: 5px;
    font-size: var(--sm);
    padding: 5px;
    margin-bottom: 24px;
    color: var(--text);
}

.input-ap,
.input-pass {
    margin-left: 19px;
}

.input:hover {
    box-shadow: 0 1px 6px 0 #20212447;
    border-color: #dfe1e500;
}

.input-username::placeholder {
    /* background-image: url(./user.png); */
    background-repeat: no-repeat;
    background-position: left;
    background-size: contain;
}

.input-password::placeholder,
.input-pass::placeholder {
    /* background-image: url(./pass.png); */
    background-repeat: no-repeat;
    background-position: left;
    background-size: contain;
    margin-bottom: 30px;
}

.input-ap::placeholder {
    /* background-image: url(./ap.png); */
    background-repeat: no-repeat;
    background-position: left;
    background-size: contain;
    margin-bottom: 30px;
}

.ok-button {
    margin-left: 25px;
}

.header-home {
    margin: 0 auto;
    width: 100%;
    height: 160px;
    display: flex;
    flex-direction: row;
    align-items: center;
    background-color: var(--main-logo-background);
    color: var(--white);
}

.logoP {
    margin: 20px;
}

.logoPTitle {
    vertical-align: middle;
    text-align: left;
    font-size: var(--md);
    font-weight: 700;
}

.menu-container {
    margin: 0 auto;
    display: grid;
    width: 500px;
    height: 340px;
    border-radius: 50px;
    grid-template-columns: 1fr 1fr;
    grid-template-rows: 1fr 1fr;
    place-items: center;
    align-items: center;
    text-align: center;
    align-content: center;
}

a {
    margin-top: 32px;
    text-decoration: none;
    color: var(--text);
    font-size: var(--md);
    font-weight: 700;
    place-content: center;
}

.config-header {
    margin: 54px auto;
    text-align: center;
    font-size: var(--lg);
    font-weight: normal;
    margin-bottom: 64px;
}

.card-container {
    margin: 0 auto;
    margin-top: 40px;
    display: grid;
    max-width: 380px;
    grid-auto-flow: column;
    grid-template-columns: 1fr 100px;
    justify-content: center;
    align-items: center;
}

.card-icon {
    text-align: right;
}

.mags-container,
.nfc-container {
    margin-top: 40px;
    display: flex;
    margin: 0 auto;
    flex-direction: column;
    align-items: center;
}

.card-form,
.read-form {
    margin-top: 50px;
    display: grid;
    grid-template-columns: 1fr 1fr;
    grid-template-rows: 1fr 1fr 1fr 1fr;
    grid-template-areas: "header header" "main main" "bottom1 bottom1" "bottom2 bottom2";
    align-items: center;
    justify-items: center;
    margin-bottom: 90px;
}

.read-form {
    grid-template-rows: 1fr 1fr 1fr;
    grid-template-areas: "header header" "main1 main2" "bottom1 bottom1" "bottom2 bottom2" "bottom3 bottom3";
}

.input-card,
.text-card {
    grid-area: header;
}

.text-card {
    border: none;
}

.input-track1 {
    grid-area: header;
}

.input-track2 {
    grid-area: main;
}

.input-date,
.text-date {
    grid-area: main1;
    margin-right: 8px;
    border: none;
}

.input-code,
.text-code {
    grid-area: main2;
    margin-left: 8px;
    border: none;
}

.text-date,
.text-code {
    font-size: var(--xsm);
    width: 175px;
}

.primary-button {
    width: 275px;
    height: 40px;
    background-color: var(--main-logo-background);
    border: none;
    border-radius: 24px;
    font-size: var(--md);
    color: var(--white);
}

.clear-button,
.save-button {
    grid-area: bottom1;
    width: 392px;
    background-color: var(--white);
    border: 1px solid var(--border);
    border-radius: 24px;
    font-size: var(--md);
    color: var(--text);
}

.send-button,
.read-button {
    grid-area: bottom2;
    width: 392px;
}

/* Footer */

.footer-home {
    position: fixed;
    width: 100%;
    height: 60px;
    bottom: 0;
    border-top: 1px solid var(--border);
    background-color: var(--white);
    place-items: center;
    align-content: center;
    display: none;
    z-index: 3;
}

.footer-icon-link {
    display: flex;
    flex-direction: column;
    align-items: center;
}

.footer-icon-text {
    margin-top: 0px;
    margin-bottom: 30px;
    color: var(--gray-text);
    font-size: var(--sm);
}

/* Center the log out icon */
.logout {
    padding-left: 5px;
}

.selected {
    color: var(--main-logo-background);
}

@media (max-width: 640px) {
    .header-container {
        margin-left: 0px;
    }

    .main-background {
        justify-content: start;
    }

    .logo {
        display: block;
    }

    .logoTitle {
        display: block;
    }

    .inputC {
        width: 280px;
    }

    .menu-container {
        width: 320px;
    }

    .card-container {
        min-width: 280px;
    }

    .text-card {
        border: none;
    }

    .text-date,
    .text-code {
        font-size: var(--xsm);
        width: 128px;
    }

    .clear-button,
    .save-button,
    .send-button,
    .read-button {
        width: 292px;
    }

    .footer-home {
        display: block;
        display: grid;
        grid-template-columns: 1fr 1fr 1fr;
    }
}

@media (min-width: 800px) {
    .header-home {
        padding-left: 100px;
    }
})=====";