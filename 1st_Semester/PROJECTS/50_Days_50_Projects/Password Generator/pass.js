const resultR1 = document.getElementById('result')
const lengthR1 = document.getElementById('length')
const uppercaseR1 = document.getElementById('uppercase')
const lowercaseR1 = document.getElementById('lowercase')
const numbersR1 = document.getElementById('number')
const symbolsR1 = document.getElementById('symbols')
const generateR1 = document.getElementById('generate')
const clipboardR1 = document.getElementById('clipboard')

const randFunction = {
    lower: getRandomLower,
    upper: getRandomUpper,
    symbol: getRandomSymbol,
    number: getRandomNumber
}

clipboardR1.addEventListener('click', () => {
    const password = resultR1.innerText
    if (!password) {
        return ''
    }

    navigator.clipboard.writeText(password);
    alert('Password has been copied to Clipboard!')

})

generateR1.addEventListener('click', () => {
    const length = lengthR1.value
    const hasLower = lowercaseR1.checked
    const hasUpper = uppercaseR1.checked
    const hasSymbol = symbolsR1.checked
    const hasNumber = numbersR1.checked

    resultR1.innerText = generatePassword(hasLower, hasUpper, hasSymbol, hasNumber
        , length)
})

function generatePassword(lower, upper, number, symbol, length) {
    let generatePassword = ''
    const typesCount = lower + upper + number + symbol
    const typesArray = [{ lower }, { upper }, { number }, { symbol }].filter(item => object.values(item)[0])

    if (typesCount === 0) {
        return ''
    }

    for (var i = 0; i < length; i += typesCount) {
        typesArray.forEach(type => {
            const funcName = object.keys(type)[0]
            generatePassword += randFunction[funcName]()
        })
    }

    const finalPassword = generatedPassword.slice(0, length)
    return finalPassword
}

function getRandomLower() {
    return String.fromCharCode(Math.floor(Math.random() * 26) + 97)
}

function getRandomUpper() {
    return String.fromCharCode(Math.floor(Math.random() * 26) + 65)
}

function getRandomNumber() {
    return String.fromCharCode(Math.floor(Math.random() * 10) + 48)
}

function getRandomSymbol() {
    const symbols = '!@#$%^&*(){}[]=<>/,.'
    return symbols[Math.floor(Math.random() * symbols.length)]
}