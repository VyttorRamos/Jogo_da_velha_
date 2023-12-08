const quadrados = document.querySelectorAll(".cell");
let checarturno = true;
let jogadoresCadastrados = false;
let vsIaMode = false;
const jogX = "X";
const jogO = "O";
var vencedor;
var turno;
var contvitoriap1 = 0;
var contvitoriap2 = 0;
const possibilidades = [
    [0,1,2],
    [3,4,5],
    [6,7,8],
    [0,3,6],
    [1,4,7],
    [2,5,8],
    [0,4,8],
    [2,4,6]
];

document.addEventListener("click", (Event) => {
    if(Event.target.matches(".cell")){
        jogar(Event.target.id);
    } 
})
 

function jogar(id) {
    if (jogadoresCadastrados) {
        const celula = document.getElementById(id);
        if (!celula.textContent && !vencedor) {
            turno = checarturno ? jogX : jogO;
            celula.textContent = turno;
            celula.classList.add(turno);
            checkwinner(turno);

            
            if (vsIaMode && !vencedor) {
                setTimeout(() => jogarIa(), 300);
            }
        }
    } else {
        alert("Por favor, cadastre-se antes de começar");
    }
}

function checkwinner(turno){
    const winner = possibilidades.some((possibi) => {
        return possibi.every((indice) =>{
            return quadrados[indice].classList.contains(turno);
        })
    });

    if(winner)
        acabajogo(turno);
    else if(checaempate())
        acabajogo();
    else 
         checarturno = !checarturno;
}

function checaempate(){
    let x = 0;
    let o = 0;

    for(indice in quadrados)
    {
        if(!isNaN(indice)){
            if(quadrados[indice].classList.contains(jogX))
             x++;
            if(quadrados[indice].classList.contains(jogO))
             o++;
        }
    } 
    return x + o === 9 ? true : false;
}

function acabajogo(vencedor = null){
    if(vencedor){
        if(vencedor == 'X' ){
            document.getElementById('mensagem').innerHTML = ("Parabéns, 'X' venceu!");
            document.getElementById('mngplayer1').style.display= 'block';
            contvitoriap1 += 1;
            document.getElementById("player1-wins").innerHTML = ("Vitórias: " + contvitoriap1);
        }
        else{
            document.getElementById('mensagem').innerHTML = ("Parabéns, 'O' venceu!");
            document.getElementById('mngplayer1').style.visibility = 'visible';
            contvitoriap2 += 1;
            document.getElementById("player2-wins").innerHTML = ("Vitórias: " + contvitoriap2);
        }
    }
    else
        document.getElementById('mensagem').innerHTML = ("Empate");
        document.getElementById('mngplayer1').style.visibility = 'visible';

        setTimeout(() => { for (let i = 0; i < quadrados.length; i++) {
            clearBox(i);
        }
        vencedor = null;
        turno = null;
        checarturno = true;
    
    function clearBox(number) {
        quadrados[number].innerHTML = '';
        quadrados[number].classList.remove(jogX);
        quadrados[number].classList.remove(jogO);
        document.getElementById('mensagem').style.visibility = 'hidden';
    }}, 500);
}
function jogarIa() {
    const celulasVazias = Array.from(quadrados).filter(celula => !celula.textContent);
    const celulaEscolhida = celulasVazias[Math.floor(Math.random() * celulasVazias.length)];

    if (celulaEscolhida) {
        turno = jogO; // ia smp é O
        celulaEscolhida.textContent = turno;
        celulaEscolhida.classList.add(turno);
        checkwinner(turno);
    }
}

function pvpmode(){
    document.getElementById("pvp").style.display = 'none', 
    document.getElementById("pvia").style.display = 'none';
    document.getElementById("resetpt").style.visibility= 'visible';
    document.getElementById("containerall").style.visibility='visible';
    document.getElementById("gamemod").style.display='none';
    
}
function pviamode(){
    vsIaMode = true;

    document.getElementById('jg2').innerHTML = "IA";
    document.getElementById("player2").style.display = 'none'; 
    document.getElementById("esconder2").style.display = 'none';
    document.getElementById("pvp").style.display = 'none';
    document.getElementById("pvia").style.display = 'none';
    document.getElementById("resetpt").style.visibility= 'visible';
    document.getElementById("containerall").style.visibility='visible';
    document.getElementById("gamemod").style.display='none';
}
function cadastrarJogador1() {
    var nomejogador1 = document.getElementById("player1");
    var novotext = String(nomejogador1.value);
    document.getElementById('jg1').innerHTML = novotext;

    document.getElementById("player1").style.display = 'none';
    document.getElementById("esconder").style.display = 'none';
    if (document.getElementById('jg1').innerHTML !== "Jogador 1:") {
        jogadoresCadastrados = true;
    }
}

function cadastrarJogador2() {
    var nomejogador2 = document.getElementById("player2");
    var novotext2 = String(nomejogador2.value);
    document.getElementById('jg2').innerHTML = novotext2;
    document.getElementById("player2").style.display = 'none';
    document.getElementById("esconder2").style.display = 'none';
    if (document.getElementById('jg2').innerHTML !== "Jogador 2:") {
        jogadoresCadastrados = true;
    }

}


