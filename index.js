//const btn = document.getElementById('btn');

const floorButtons = Array.from(document.querySelectorAll('.grid-item button'));

for (let i = 0; i < floorButtons.length; i++) {
    console.log(floorButtons[i]);
    floorButtons[i].addEventListener('click', () => {
        const cp = document.querySelector('.control-panel');
        cp.style.visibility = 'visible';
        cp.style.opacity = '1';
        cp.style.transition = 'opacity 0.5s linear';

    });
}

/*const cpButtons = Array.from(document.querySelectorAll('.control-panel button'));

for (let i = 0; i < cpButtons.length; i++) {
    console.log(cpButtons[i]);
    cpButtons[i].addEventListener('click', () => {
        const cp = document.querySelector('.control-panel');
        cp.style.visibility = 'hidden';
        cp.style.opacity = '0';
        cp.style.transition = 'visibility 0s 0.5s, opacity 0.5s linear';
    });
}*/