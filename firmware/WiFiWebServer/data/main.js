// Uncomment this to test on a local environment
// let pollMode;
// let nfcID;
// let sensRes;
// let selRes;
// Comment the above lines to upload to the BomberCat

let currentLocation = localStorage.getItem("location");
let reload = localStorage.getItem("reload");

// Update current page location
function updateLocation(location) {
    currentLocation = location;
    localStorage.setItem("location", currentLocation);
    localStorage.setItem("counter", 0);
    localStorage.setItem("reload", "true");
    window.location.reload();
}

function reloadPageListener(page, delay) {
    if (reload == "true") {
        if (localStorage.getItem("counter") == 0) {
            localStorage.setItem("counter", 1);
            window.location.href = currentLocation;
        }

        // Reload page to "page.html" after delay in ms
        if (localStorage.getItem("counter") == 1) {
            setTimeout(() => {
                localStorage.setItem("reload", false);
                window.location.replace(page);
            }, delay);
        }
    }
}

// Home
let btnConfig = document.querySelector("#btnConfig");
let btnNfc = document.querySelector("#btnNfc");

if (btnConfig != null) {
    btnConfig.addEventListener("click", () => { alert("Not available yet!") });
}

// Magspoof
let magspoof = document.querySelector("#magspoof");
let magspoofForm = document.querySelector("#magspoofForm");
let btnSave = document.querySelector("#btnSave");
let btnEmulate = document.querySelector("#btnEmulate");
let btnField = document.querySelector("#btnField");
let track1 = document.querySelector("#track1");
let track2 = document.querySelector("#track2");

// Check if magspoof.html is loaded
if (magspoof != null) {
    magspoofForm.addEventListener("submit", (event) => {
        event.preventDefault();
        // Save tracks in local storage
        localStorage.setItem("track1", track1.value);
        localStorage.setItem("track2", track2.value);

        updateLocation(`magspoof.html?track1=${track1.value}&track2=${track2.value}&button=${btnField.value}#`);
    });

    btnSave.addEventListener("click", (event) => {
        // btnField.setAttribute("value", "Save");
        event.preventDefault();
        alert("Not available yet!");
    });

    btnEmulate.addEventListener("click", () => {
        btnField.setAttribute("value", "Emulate");
    });

    // Load tracks from local storage
    track1.value = localStorage.getItem("track1");
    track2.value = localStorage.getItem("track2");

    reloadPageListener("magspoof.html", 500);
}

// Info
let btnSendMail = document.querySelector("#btnSendMail");

if (btnSendMail != null) {
    btnSendMail.addEventListener("click", (event) => {
        event.preventDefault();
        alert("Not available yet!")
    });
}

// NFC
let nfc = document.querySelector("#nfc");
let tvPollMode = document.querySelector("#tvPollMode");
let tvNfcID = document.querySelector("#tvNfcID");
let tvSensRes = document.querySelector("#tvSensRes");
let tvSelRes = document.querySelector("#tvSelRes");
let btnRead = document.querySelector("#btnRead");

// Check if nfc.html is loaded
if (nfc != null) {
    console.log('From BomberCat: ');
    console.log(pollMode);
    console.log(`NFC ID: ${nfcID}`);
    console.log(`SENS RES: ${sensRes}`);
    console.log(`SEL RES: ${selRes}`);

    tvPollMode.textContent = pollMode;
    tvNfcID.value = nfcID;
    tvSensRes.value = sensRes;
    tvSelRes.value = selRes;

    if (reload == "true") {
        btnRead.value = "Reading...";
    } else {
        btnRead.value = "Read";
    }

    btnRead.addEventListener("click", (event) => {
        event.preventDefault();
        updateLocation(`nfc.html?runDetectTags=true#`);
    });

    reloadPageListener("nfc.html?runDetectTags=false#", 5000);
}