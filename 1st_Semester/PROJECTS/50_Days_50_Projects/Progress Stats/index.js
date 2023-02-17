const progress = document.getElementById('progress')
const preview = document.getElementById('pre');
const next = document.getElementById('next')
const allCicrles = document.querySelectorAll('.circle')

let currentlyActiveButton = 1

next.addEventListener('click', ()=>{
    currentlyActiveButton++

    if(currentlyActiveButton > allCicrles.length){
        currentlyActiveButton = allCicrles.length
    } 

    update()
})

preview.addEventListener('click',()=>{
    currentlyActiveButton--

    if(currentlyActiveButton < 1){
        currentlyActiveButton = 1
    }

    update()

})

function update(){
    allCicrles.forEach((circle,idx) =>{
        if(idx < currentlyActiveButton){
            circle.classList.add('active')
        }
        else{
            circle.classList.remove('active')
        }
    })

    const actives = document.querySelectorAll('.active')

    progress.style.width = (actives.length - 1) / (allCicrles.length - 1) * 100 + '%'

    if(currentlyActiveButton === 1){
            preview.disabled = true
    }
    else if(currentlyActiveButton === allCicrles.length){
            next.disabled = true
    }
    else{
            preview.disabled = false
            next.disabled = false
    }
}
