# CodeRats - Aplicação Mobile

Este repositório contém o **monorepo** do projeto **CodeRats**, uma plataforma voltada para acompanhamento de atividades de desenvolvedores.  
A aplicação é composta por um **app mobile em Flutter** e um **backend em Node.js (NestJS)**, utilizando **PostgreSQL** como banco primário e **SQLite** para cache e operações offline.

---

## 🚀 Conceito Geral

O objetivo é fornecer uma solução **offline-first** para registro de check-ins com foto e geolocalização, gestão de grupos e convites, além de evoluir futuramente para integrações com o **GitHub** e uso de **IA** para avaliação de código.

### Principais Releases
- **R1 (Check-ins):** Registro de atividades com evidências visuais e geoespaciais.
- **R2 (GitHub):** Integração via OAuth para métricas de contribuição.
- **R3 (IA):** Análise de código com feedback automatizado.
- **R4 (Times/Repos):** Associações de grupos a repositórios específicos para análises comparativas.

### Stack Tecnológica
- **Frontend:** Flutter  
- **Backend:** Node.js (NestJS)  
- **Banco de Dados:** PostgreSQL + SQLite (offline)  
- **Hospedagem:** Azure  
- **CI/CD:** GitHub Actions  
- **Ambiente Dev:** Docker  

---

## 📑 Sumário de Arquivos e Pastas

- [`.github/workflows/main.yml`](./.github/workflows/main.yml) → Pipeline de build, testes e deploy  
- [`apps/backend`](./apps/backend) → API em Node.js (NestJS)  
- [`apps/mobile`](./apps/mobile) → Aplicativo Flutter (Android/iOS)  
- [`docs/doc_base.md`](./docs/doc_base.md) → Documento base de arquitetura e planejamento  
- [`docs/doc_gitflow.md`](./docs/doc_gitflow.md) → Guia de fluxo de trabalho com GitHub Flow  
- [`packages/`](./packages/) → Arquivos externos (Designs, Artes, Documentos, Artigos)  

___

## 📂 Estrutura do Repositório

A organização segue o padrão **monorepo**, com separação entre aplicações, documentação e pacotes auxiliares.

```

.github/             → Configurações de automação e workflows (CI/CD)
└── workflows/
└── main.yml   → Pipeline de build, testes e deploy

apps/                → Aplicações do projeto
├── backend        → API em Node.js (NestJS)
└── mobile         → Aplicativo Flutter (Android/iOS)

docs/                → Documentação geral do projeto
├── doc\_base.md    → Documento base de arquitetura e planejamento
└── doc\_gitflow\.md → Guia de fluxo de trabalho com GitHub Flow

packages/            → Pacotes e utilitários compartilhados
└── example.txt    → Exemplo de arquivo interno

.gitignore           → Arquivos e pastas ignorados pelo Git
docker-compose.yml   → Configuração de containers para desenvolvimento
readme.md            → Este documento

```

---

## 👥 Equipe

O projeto é desenvolvido por uma equipe de 6 integrantes, atuando em papéis como:
- **Product Owner**
- **Tech Lead**
- **Dev Mobile**
- **Dev Backend**
- **DevOps**

> A coordenação é colaborativa e todos podem atuar de forma transversal em tarefas críticas.

---

## ✅ Status

Versão atual do documento de arquitetura: **1.13**  
O projeto encontra-se em fase inicial, com definição de arquitetura e organização de repositório.

---
