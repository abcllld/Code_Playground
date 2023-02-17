const number = document.querySelectorAll('number span')
const counting = document.querySelector('counting')
const finalMessage = document.querySelector('final')
const replay = document.querySelector('#replay')

runAnimation()

function resetDOM() {
    counting.classList.remove('hide')
    finalMessage.classList.remove('show')

    number.forEach((num) => {
        num.classList.value = ''
    })

    number[0].classList.add('in')
}

function runAnimation() {
    number.forEach((num, idx) => {
        const nextToLast = number.length - 1

        num.addEventListener('animationend', (e) => {
            if (e.aninamtionName === 'goIn' && idx !== nextToLast) {
                num.classList.remove('in')
                num.classList.add('out')
            }

            else if (aninamtionName === 'goOut' && num.nextElementSibling) {
                num.nextElementSibling.classList.add('in')
            }

            else {
                counting.classList.add('hide')
                finalMessage.classList.add('show')
            }
        })
    })
}

replay.addEventListener('click', () => {
    resetDOM()
    runAnimation()
})




// const nums = document.querySelectorAll('.nums span')
// const counter = document.querySelector('.counter')
// const finalMessage = document.querySelector('.final')
// const replay = document.querySelector('#replay')

// runAnimation()

// function resetDOM() {
//   counter.classList.remove('hide')
//   finalMessage.classList.remove('show')

//   nums.forEach((num) => {
//     num.classList.value = ''
//   })

//   nums[0].classList.add('in')
// }

// function runAnimation() {
//   nums.forEach((num, idx) => {
//     const nextToLast = nums.length - 1

//     num.addEventListener('animationend', (e) => {
//       if (e.animationName === 'goIn' && idx !== nextToLast) {
//         num.classList.remove('in')
//         num.classList.add('out')
//       } else if (e.animationName === 'goOut' && num.nextElementSibling) {
//         num.nextElementSibling.classList.add('in')
//       } else {
//         counter.classList.add('hide')
//         finalMessage.classList.add('show')
//       }
//     })
//   })
// }

// replay.addEventListener('click', () => {
//   resetDOM()
//   runAnimation()
// })
