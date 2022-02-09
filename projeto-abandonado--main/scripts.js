const Modal = {
    open(){
       
      document
      .querySelector('.modal-overlay')
      .classList
      .add('active')
    
    },
       close(){
      document
        .querySelector('.modal-overlay')
      .classList
      .remove('active')

       }
  }

  const transaction = [
  {
    id: 1,
    description: 'Luz',
    amount: -50000,
    date: 28/01/21,
  },
  {
    id: 2,
    description: 'Website',
    amount: 500000,
    date: 28/01/21,
  },
  {
    id: 3,
    description: 'Luz',
    amount: - 20000,
    date: 28/01/21,
  },
]

const Transaction = {
  receive () {
    //somar as entradas
  },

  spent() {
    //somar as saídas
  }
}

const DOM = {
  transactionContainer: document.querySelector ('#data-table tbody'),
  addTransaction(transaction, index) {
     const tr = document.createElement('tr')
     tr.innerHTML = DOM.innerHTMLTransaction(transaction)
     
     DOM.transactionContainer.appendChild(tr)
   },

  innerHTMLTransaction(transaction) {
    const html = `
        
    <td class="description">${transaction.description}</td>
    
    <td class="spent">${transaction.amount}</td>
    
    <!-- spent =  gasto-->
    
    <td class="date">${transaction.date}</td>
    
    <td><img src="./assets/minus.svg" alt=" Remover Transação"</td>
      `
      return html
  }
}
    DOM.addTransaction(transaction[0])
    DOM.addTransaction(transaction[1])
    DOM.addTransaction(transaction[2])
    