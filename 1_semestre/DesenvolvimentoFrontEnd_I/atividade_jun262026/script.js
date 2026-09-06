let displayAtual = "0";
let primeiroNumero = null;
let operacaoAtual = null;

function digitar(num){
    if (displayAtual === "0") {
        displayAtual = num;
    } else {
        displayAtual += num;
    }
    document.getElementById("display").innerHTML = displayAtual;
}

function escolherOperacao(op){
    primeiroNumero = Number(displayAtual);
    operacaoAtual = op;
    displayAtual = "0";
}

function calcular(){
    const v2 = Number(displayAtual);
    let resultado;

    switch (operacaoAtual) {
        case '+':
            resultado = primeiroNumero + v2;
            break;
        case '−':
            resultado = primeiroNumero - v2;
            break;
        case '×':
            resultado = primeiroNumero * v2;
            break;
        case '÷': 
            if (v2 === 0) {
                resultado = "Erro: Divisão por 0."
            } else {
                resultado = primeiroNumero / v2;
            }
            break;
        case 'quad':
            resultado = primeiroNumero ** 2;
            break;
        case 'pot':
            resultado = primeiroNumero ** v2;
            break;
        case 'raiz':
            resultado = primeiroNumero ** 0.5;
            break;
        case 'resto':
            resultado = primeiroNumero % v2;
            break;
        default:
            resultado = v2;
            break;
    }
    
    limpar(String(resultado));
}

function limpar(tag){
    displayAtual = tag;
    primeiroNumero = null;
    operacaoAtual = null;
    document.getElementById("display").innerHTML = displayAtual;
}