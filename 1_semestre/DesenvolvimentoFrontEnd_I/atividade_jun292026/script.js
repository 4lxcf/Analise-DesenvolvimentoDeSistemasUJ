// ═══════════════════════════════════════════════════════════════
//  script.js — Formulário de Cadastro com Validação
// ═══════════════════════════════════════════════════════════════

// ─── 1. Referências ao DOM ──────────────────────────────────────
const form         = document.getElementById('formCadastro');
const painelSucesso = document.getElementById('painelSucesso');

const inputNome      = document.getElementById('nome');
const inputCpf       = document.getElementById('cpf');
const inputTelefone  = document.getElementById('telefone');
const inputEmail     = document.getElementById('email');
const inputSenha     = document.getElementById('senha');
const inputConfirmar = document.getElementById('confirmar');

const erroNome      = document.getElementById('erroNome');
const erroCpf       = document.getElementById('erroCpf');
const erroTelefone  = document.getElementById('erroTelefone');
const erroEmail     = document.getElementById('erroEmail');
const erroSenha     = document.getElementById('erroSenha');
const erroConfirmar = document.getElementById('erroConfirmar');

const contadorSenha = document.getElementById('contadorSenha');


// ─── 2. Funções de validação ─────────────────────────────────────

/**
 * Aplica ou remove as classes .valido / .invalido no input
 * e exibe ou limpa a mensagem de erro no span correspondente.
 *
 * @param {HTMLInputElement} input  - O campo a ser validado
 * @param {HTMLElement}      span   - O span que exibe o erro
 * @param {boolean}          ok     - true = válido, false = inválido
 * @param {string}           msg    - Mensagem a exibir quando inválido
 * @returns {boolean} - Retorna o valor de "ok"
 */
function aplicarEstado(input, span, ok, msg) {
  input.className  = ok ? 'valido' : 'invalido';
  span.textContent = ok ? ''       : msg;
  return ok;
}

// ── Valida o nome ──────────────────────────────────────────────
function validarNome() {
  const valor = inputNome.value.trim();

  if (valor.length === 0) {
    return aplicarEstado(inputNome, erroNome, false, 'O nome é obrigatório.');
  }
  if (valor.length < 3) {
    return aplicarEstado(inputNome, erroNome, false, 'Mínimo de 3 caracteres.');
  }

  return aplicarEstado(inputNome, erroNome, true, '');
}

// ── Valida o CPF ──────────────────────────────────────────────
function validarCpf() {
  const valor = inputCpf.value;

  if (valor.length === 0) {
    return aplicarEstado(inputCpf, erroCpf, false, 'O CPF é obrigatório.');
  }
  if (valor.length !== 11) {
    return aplicarEstado(inputCpf, erroCpf, false, 'Digite os 11 números do CPF.');
  }

  return aplicarEstado(inputCpf, erroCpf, true, '');
}

// ── Valida o telefone ──────────────────────────────────────────────
function validarTelefone() {
  const valor = inputTelefone.value;

  if (valor.length === 0) {
    return aplicarEstado(inputTelefone, erroTelefone, false, 'O Telefone é obrigatório.');
  }
  if (valor.length !== 9) {
    return aplicarEstado(inputTelefone, erroTelefone, false, 'Digite os 9 números do telefone (incluindo DDD).');
  }

  return aplicarEstado(inputTelefone, erroTelefone, true, '');
}

// ── Valida o e-mail ────────────────────────────────────────────
function validarEmail() {
  const valor = inputEmail.value.trim();
  const regex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;

  if (valor.length === 0) {
    return aplicarEstado(inputEmail, erroEmail, false, 'O e-mail é obrigatório.');
  }
  if (!regex.test(valor)) {
    return aplicarEstado(inputEmail, erroEmail, false, 'Digite um e-mail válido.');
  }

  return aplicarEstado(inputEmail, erroEmail, true, '');
}

// ── Valida a senha ─────────────────────────────────────────────
function validarSenha() {
  const valor = inputSenha.value;
  const tamanho = valor.length;

  // Atualiza o contador de caracteres
  contadorSenha.textContent = `${tamanho} / 6 caracteres`;
  contadorSenha.className   = tamanho >= 6 ? 'contador ok' : 'contador';

  if (tamanho === 0) {
    return aplicarEstado(inputSenha, erroSenha, false, 'A senha é obrigatória.');
  }
  if (tamanho < 6) {
    return aplicarEstado(inputSenha, erroSenha, false, `Faltam ${6 - tamanho} caracteres.`);
  }

  // Se a confirmação já foi preenchida, revalida ela também
  if (inputConfirmar.value.length > 0) validarConfirmar();

  return aplicarEstado(inputSenha, erroSenha, true, '');
}

// ── Valida a confirmação de senha ──────────────────────────────
function validarConfirmar() {
  const valor = inputConfirmar.value;

  if (valor.length === 0) {
    return aplicarEstado(inputConfirmar, erroConfirmar, false, 'Confirme sua senha.');
  }
  if (valor !== inputSenha.value) {
    return aplicarEstado(inputConfirmar, erroConfirmar, false, 'As senhas não coincidem.');
  }

  return aplicarEstado(inputConfirmar, erroConfirmar, true, '');
}


// ─── 3. Eventos de validação em tempo real ───────────────────────
// 'input'  → dispara a cada tecla pressionada
// 'blur'   → dispara ao sair do campo (perda de foco)

inputNome.addEventListener('input', validarNome);
inputNome.addEventListener('blur',  validarNome);

inputCpf.addEventListener('input', validarCpf);
inputCpf.addEventListener('blur',  validarCpf);

inputTelefone.addEventListener('input', validarTelefone);
inputTelefone.addEventListener('blur',  validarTelefone);

inputEmail.addEventListener('input', validarEmail);
inputEmail.addEventListener('blur',  validarEmail);

inputSenha.addEventListener('input', validarSenha);
inputSenha.addEventListener('blur',  validarSenha);

inputConfirmar.addEventListener('input', validarConfirmar);
inputConfirmar.addEventListener('blur',  validarConfirmar);


// ─── 4. Envio do formulário ──────────────────────────────────────
form.addEventListener('submit', function(event) {
  // Impede o recarregamento padrão da página
  event.preventDefault();

  // Roda todas as validações (mesmo que o usuário não tenha tocado nos campos)
  const nomeOk      = validarNome();
  const cpfOk       = validarCpf();
  const telefoneOk  = validarTelefone();
  const emailOk     = validarEmail();
  const senhaOk     = validarSenha();
  const confirmarOk = validarConfirmar();

  // Só prossegue se tudo for válido
  if (nomeOk && cpfOk && telefoneOk && emailOk && senhaOk && confirmarOk) {
    mostrarSucesso();
  }
});


// ─── 5. Feedback de sucesso ──────────────────────────────────────
function mostrarSucesso() {
  // Oculta o formulário
  form.style.display = 'none';

  // Preenche os dados do usuário no painel de sucesso
  document.getElementById('nomeUsuario').textContent  = inputNome.value.trim();
  document.getElementById('emailUsuario').textContent = inputEmail.value.trim();

  // Exibe o painel de sucesso (com animação via CSS)
  painelSucesso.classList.add('visivel');
}


// ─── 6. Reiniciar formulário ─────────────────────────────────────
function reiniciar() {
  // Limpa todos os campos
  form.reset();

  // Remove classes de validação de todos os inputs
  [inputNome, inputCpf, inputTelefone, inputEmail, inputSenha, inputConfirmar].forEach(input => {
    input.className = '';
  });

  // Limpa todas as mensagens de erro
  [erroNome, erroCpf, erroTelefone, erroEmail, erroSenha, erroConfirmar].forEach(span => {
    span.textContent = '';
  });

  // Reseta o contador de caracteres
  contadorSenha.textContent = '0 / 6 caracteres';
  contadorSenha.className   = 'contador';

  // Oculta o painel de sucesso e mostra o form novamente
  painelSucesso.classList.remove('visivel');
  form.style.display = 'block';
}
